Easy booking
==================

Easy booking allows you to set up a website, that will suit all your needs in managing your own hotel, inn or hostel online.

It gives a set of options for visitors to make room reservations, contact hotel administration or just follow hotel’s newsletter to be aware of all special offers and discounts.
Easy booking profile is powered by Drupal Rooms and Drupal Commerce - widely used and popular contributed decisions, which means active maintaining and timely technical support.

Features:

- Online booking
- Online availability
- Easy to administer booking with Availability calendar
- Resposive design and theme
- IE8+ (with degradation)
- Drupal commerce powered
- Free and Open-Source
- Easy to integrate with any payments processor and other ecommerce features (commerce)

User guide:

There are several main content types within Easy Booking:

1) Frontpage slideshow - responsible for slides at the top of the main page.
Easy booking frontpage slideshow

2) About area - any information about hotel, it’s history, some cultural data about the city where the hotel or inn is located.
Easy booking about area

3) News - nodes of that content type will be available in the news section of the website. There are three categories of news: “Offer”, “Event” and “General”
Easy booking news
You may add your own categories by visiting admin/structure/taxonomy/news_category and they will become choosable, too.

4) Our Services - responsible for “our services” section next to the frontpage slideshow. Nodes of this content type may be considered as hotel’s primary features or advantages.
Easy booking our services

5) Webform - creates forms or questionnaires accessible to users. Submission results and statistics are recorded and accessible to site administrator.
Please note! Webform requires some manual settings to be performed, you can configure it by visiting “Content” -> “Webforms” -> “Components” and set a valid e-mail for receiving notifications. See the guide for more info: webform guide

Colorized Google Map
Colorized google map block module is used to add Google map as block. Using this module you are able to colorize any element of the map, hide controls and some other features. Visit module project page for additional info.

To customize existing map, visit admin/structure/block/manage/colorized_gmap/1/configure page.
Colorized gmap settings

Rooms system:

There are a number of settings premade for you so that you could get started as soon as possible. Drupal rooms provides bookable unit types, that presuppose some basic room features, common for every unit of that type. Easy Booking contains its own bookable unit type called “Room”. It is configured to satisfy most of the basic needs in hotel management. You can edit or clone it’s settings by visiting admin/rooms/units/unit-types.
Easy booking roopms creation

All the rooms are belong to this unit type. You can edit any setting for existing rooms or add and edit your own rooms by visiting "Rooms" -> "Bookable Units" menu at the top of your screen. Adding a room is possible via Add a Bookable Unit button. If you want to edit an existing room, just click an Edit link in the Operations links section next to your room.
Easy booking roopms creation

Visitors are able to place bookings by pressing “Book Now” button and submitting checkout form, which contains visitor’s personal information and contacts.

Once checkout form is submitted, both visitor and administrator receive an e-mail notification about this reservation. Submitting this form also updates availability for the chosen room. Administrator may contact visitor via e-mail and confirm all the necessary details about dates, payment, transfer, etc.
Note: on-line payment systems are not supported by Easy booking yet. But it is to hard to implement due to commerce module support.
Orders

On this page all the orders are listed. You can view any of the existing orders to get more info about the booking, or edit any order to mark it declined or completed.
Room availability may be managed in the admin/rooms/units section. “Manage Availability” link next to the room will lead you to the room availability calendars, where all the necessary settings can be viewed and/or changed.
Availability

Final notes:
- All the blocks are configurable.
- You will need to configure simplenews module to manage subscription feature. here is a great tutorial: simplenews

We are open for any feature requests.

Created by ADCI solutions team

