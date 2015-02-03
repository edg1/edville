<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<!-- portfolio section -->
<div class="section-content single-project-section">
  <div class="container">      
    <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

      <?php print $user_picture; ?>

      <?php print render($title_prefix); ?>
      <?php if (!$page): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <div class="submitted">
          <?php print $submitted; ?>
        </div>
      <?php endif; ?>
      <div class="row">
        <div class="col-md-8">
          <div class="image-place"<?php print $content_attributes; ?>>
            <?php
              // We hide the comments and links now so that we can render them later.
              hide($content['comments']);
              hide($content['links']);
              hide($content['body']);
              $categories = isset($content['field_portfolio_categories']) ? $content['field_portfolio_categories'] : array();
              foreach ($categories['#items'] as $key => $data) {
                $categories[$key]['#title'] = '<i class="fa fa-tag"></i>' . $categories[$key]['#title'];
                $categories[$key]['#options']['html'] = TRUE;
              }
              
              $preview = $content['field_preview'];
              foreach ($preview['#items'] as $key => $data) {
                $preview[$key]['#element']['title'] = '<i class="fa fa-link"></i>' . $preview[$key]['#element']['title'];
                $preview[$key]['#element']['html'] = TRUE;
              }
              hide($content['field_portfolio_categories']);
              hide($content['field_preview']);
              if (isset($content['field_share_this_post'][0]['facebook']))
                $content['field_share_this_post'][0]['facebook']['#value'] = '<i class="fa fa-facebook"></i>';
              if (isset($content['field_share_this_post'][0]['twitter']))
                $content['field_share_this_post'][0]['twitter']['#value'] = '<i class="fa fa-twitter"></i>';
              if (isset($content['field_share_this_post'][0]['google_plusone_share']))
                $content['field_share_this_post'][0]['google_plusone_share']['#value'] = '<i class="fa fa-google-plus"></i>';
              if (isset($content['field_share_this_post'][0]['pinterest_share']))
                $content['field_share_this_post'][0]['pinterest_share']['#value'] = '<i class="fa fa-pinterest"></i>';
              $share_this_post = render($content['field_share_this_post']); 
              $flags = flag_get_counts('node', $node->nid, $reset = FALSE);  
              if (!isset($flags['like']) || $flags['like'] == '') {
                $flags['like'] = 0;
              }
              print render($content['field_image']);             
            ?>
          </div>    
        </div>                         
        <div class="col-md-4">                
          <div class="project-content">            
            <?php print render($content['body']); ?>            
            <?php print render($categories); ?>
            <?php print render($preview); ?>
            <?php print render($content['links']['flag']) . '<span class="hide like-count" id="like-node-' . $node->nid . '">' . @$flags['like'] . '</span>'; ?>
            <?php print $share_this_post; ?>
            <?php print render($content); ?>
          </div>                      
        </div>
      </div>
    </div>
  </div>
</div>