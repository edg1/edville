<?php
require_once('TweetPHP.php');
$TweetPHP = new TweetPHP(
  array(
    'consumer_key'          => 'ZugtsEMulXZufqwmlpKPxoNgB',
    'consumer_secret'       => '2IeKZuNS6ULDw8vQHvBwzq1Oofk1A1wO7vaMJCiiIqXI7nM34N',
    'access_token'          => '53787666-F1V2kbQbAD3Nv13yYp02OL2ibZzDdpfwWPk90rgwV',
    'access_token_secret'   => 'dXFb4EQPH9WyLip2YbqckjoNOlZPhfzmhI2Pg4E0XzTIr',
    'twitter_screen_name'   => 'khuongkd',
    'tweets_to_display'     => 3,
    'cachetime'             => 1,
    'twitter_wrap_open'     => '<h4><span>Latest Tweets</span></h4>',
    'twitter_wrap_close'    => '',
    'tweet_wrap_open'       => '<div class="twitter-widget"><i class="fa fa-twitter"></i><p>',
    'meta_wrap_open'        => '<span>',
    'meta_wrap_close'       => '</span></p>',
    'tweet_wrap_close'      => '</div>',
  )
);
echo $TweetPHP->get_tweet_list();
