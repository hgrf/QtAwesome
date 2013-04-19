/**
 * QtAwesome - use font-awesome (or other font icons) in your c++ / Qt Application
 *
 * MIT License:
 *
 * Copyright 2013 - Reliable Bits Software by Blommers IT. All Rights Reserved.
 * Author Rick Blommers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 * THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
 * OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * I would appriciate it if you let me know which projects you are using this for.
 */

#ifndef QTAWESOME_H
#define QTAWESOME_H

#include <QIcon>
#include <QIconEngine>
#include <QPainter>
#include <QRect>
#include <QVariantMap>


/// A list of all icon-names with the codepoint (unicode-value) on the right
/// You can use the names on the page  http://fortawesome.github.io/Font-Awesome/design.html  ( replace every dash '-' with an underscore '_')
enum QtFontAwesomeName {
    icon_glass               = 0xf000,
    icon_music               = 0xf001,
    icon_search              = 0xf002,
    icon_envelope            = 0xf003,
    icon_heart               = 0xf004,
    icon_star                = 0xf005,
    icon_star_empty          = 0xf006,
    icon_user                = 0xf007,
    icon_film                = 0xf008,
    icon_th_large            = 0xf009,
    icon_th                  = 0xf00a,
    icon_th_list             = 0xf00b,
    icon_ok                  = 0xf00c,
    icon_remove              = 0xf00d,
    icon_zoom_in             = 0xf00e,

    icon_zoom_out            = 0xf010,
    icon_off                 = 0xf011,
    icon_signal              = 0xf012,
    icon_cog                 = 0xf013,
    icon_trash               = 0xf014,
    icon_home                = 0xf015,
    icon_file                = 0xf016,
    icon_time                = 0xf017,
    icon_road                = 0xf018,
    icon_download_alt        = 0xf019,
    icon_download            = 0xf01a,
    icon_upload              = 0xf01b,
    icon_inbox               = 0xf01c,
    icon_play_circle         = 0xf01d,
    icon_repeat              = 0xf01e,

    /* \f020 doesn't work in Safari. all shifted one down */
    icon_refresh             = 0xf021,
    icon_list_alt            = 0xf022,
    icon_lock                = 0xf023,
    icon_flag                = 0xf024,
    icon_headphones          = 0xf025,
    icon_volume_off          = 0xf026,
    icon_volume_down         = 0xf027,
    icon_volume_up           = 0xf028,
    icon_qrcode              = 0xf029,
    icon_barcode             = 0xf02a,
    icon_tag                 = 0xf02b,
    icon_tags                = 0xf02c,
    icon_book                = 0xf02d,
    icon_bookmark            = 0xf02e,
    icon_print               = 0xf02f,

    icon_camera              = 0xf030,
    icon_font                = 0xf031,
    icon_bold                = 0xf032,
    icon_italic              = 0xf033,
    icon_text_height         = 0xf034,
    icon_text_width          = 0xf035,
    icon_align_left          = 0xf036,
    icon_align_center        = 0xf037,
    icon_align_right         = 0xf038,
    icon_align_justify       = 0xf039,
    icon_list                = 0xf03a,
    icon_indent_left         = 0xf03b,
    icon_indent_right        = 0xf03c,
    icon_facetime_video      = 0xf03d,
    icon_picture             = 0xf03e,

    icon_pencil              = 0xf040,
    icon_map_marker          = 0xf041,
    icon_adjust              = 0xf042,
    icon_tint                = 0xf043,
    icon_edit                = 0xf044,
    icon_share               = 0xf045,
    icon_check               = 0xf046,
    icon_move                = 0xf047,
    icon_step_backward       = 0xf048,
    icon_fast_backward       = 0xf049,
    icon_backward            = 0xf04a,
    icon_play                = 0xf04b,
    icon_pause               = 0xf04c,
    icon_stop                = 0xf04d,
    icon_forward             = 0xf04e,

    icon_fast_forward        = 0xf050,
    icon_step_forward        = 0xf051,
    icon_eject               = 0xf052,
    icon_chevron_left        = 0xf053,
    icon_chevron_right       = 0xf054,
    icon_plus_sign           = 0xf055,
    icon_minus_sign          = 0xf056,
    icon_remove_sign         = 0xf057,
    icon_ok_sign             = 0xf058,
    icon_question_sign       = 0xf059,
    icon_info_sign           = 0xf05a,
    icon_screenshot          = 0xf05b,
    icon_remove_circle       = 0xf05c,
    icon_ok_circle           = 0xf05d,
    icon_ban_circle          = 0xf05e,

    icon_arrow_left          = 0xf060,
    icon_arrow_right         = 0xf061,
    icon_arrow_up            = 0xf062,
    icon_arrow_down          = 0xf063,
    icon_share_alt           = 0xf064,
    icon_resize_full         = 0xf065,
    icon_resize_small        = 0xf066,
    icon_plus                = 0xf067,
    icon_minus               = 0xf068,
    icon_asterisk            = 0xf069,
    icon_exclamation_sign    = 0xf06a,
    icon_gift                = 0xf06b,
    icon_leaf                = 0xf06c,
    icon_fire                = 0xf06d,
    icon_eye_open            = 0xf06e,

    icon_eye_close           = 0xf070,
    icon_warning_sign        = 0xf071,
    icon_plane               = 0xf072,
    icon_calendar            = 0xf073,
    icon_random              = 0xf074,
    icon_comment             = 0xf075,
    icon_magnet              = 0xf076,
    icon_chevron_up          = 0xf077,
    icon_chevron_down        = 0xf078,
    icon_retweet             = 0xf079,
    icon_shopping_cart       = 0xf07a,
    icon_folder_close        = 0xf07b,
    icon_folder_open         = 0xf07c,
    icon_resize_vertical     = 0xf07d,
    icon_resize_horizontal   = 0xf07e,

    icon_bar_chart           = 0xf080,
    icon_twitter_sign        = 0xf081,
    icon_facebook_sign       = 0xf082,
    icon_camera_retro        = 0xf083,
    icon_key                 = 0xf084,
    icon_cogs                = 0xf085,
    icon_comments            = 0xf086,
    icon_thumbs_up           = 0xf087,
    icon_thumbs_down         = 0xf088,
    icon_star_half           = 0xf089,
    icon_heart_empty         = 0xf08a,
    icon_signout             = 0xf08b,
    icon_linkedin_sign       = 0xf08c,
    icon_pushpin             = 0xf08d,
    icon_external_link       = 0xf08e,

    icon_signin              = 0xf090,
    icon_trophy              = 0xf091,
    icon_github_sign         = 0xf092,
    icon_upload_alt          = 0xf093,
    icon_lemon               = 0xf094,
    icon_phone               = 0xf095,
    icon_check_empty         = 0xf096,
    icon_bookmark_empty      = 0xf097,
    icon_phone_sign          = 0xf098,
    icon_twitter             = 0xf099,
    icon_facebook            = 0xf09a,
    icon_github              = 0xf09b,
    icon_unlock              = 0xf09c,
    icon_credit_card         = 0xf09d,
    icon_rss                 = 0xf09e,

    icon_hdd                 = 0xf0a0,
    icon_bullhorn            = 0xf0a1,
    icon_bell                = 0xf0a2,
    icon_certificate         = 0xf0a3,
    icon_hand_right          = 0xf0a4,
    icon_hand_left           = 0xf0a5,
    icon_hand_up             = 0xf0a6,
    icon_hand_down           = 0xf0a7,
    icon_circle_arrow_left   = 0xf0a8,
    icon_circle_arrow_right  = 0xf0a9,
    icon_circle_arrow_up     = 0xf0aa,
    icon_circle_arrow_down   = 0xf0ab,
    icon_globe               = 0xf0ac,
    icon_wrench              = 0xf0ad,
    icon_tasks               = 0xf0ae,

    icon_filter              = 0xf0b0,
    icon_briefcase           = 0xf0b1,
    icon_fullscreen          = 0xf0b2,

    icon_group               = 0xf0c0,
    icon_link                = 0xf0c1,
    icon_cloud               = 0xf0c2,
    icon_beaker              = 0xf0c3,
    icon_cut                 = 0xf0c4,
    icon_copy                = 0xf0c5,
    icon_paper_clip          = 0xf0c6,
    icon_save                = 0xf0c7,
    icon_sign_blank          = 0xf0c8,
    icon_reorder             = 0xf0c9,
    icon_list_ul             = 0xf0ca,
    icon_list_ol             = 0xf0cb,
    icon_strikethrough       = 0xf0cc,
    icon_underline           = 0xf0cd,
    icon_table               = 0xf0ce,

    icon_magic               = 0xf0d0,
    icon_truck               = 0xf0d1,
    icon_pinterest           = 0xf0d2,
    icon_pinterest_sign      = 0xf0d3,
    icon_google_plus_sign    = 0xf0d4,
    icon_google_plus         = 0xf0d5,
    icon_money               = 0xf0d6,
    icon_caret_down          = 0xf0d7,
    icon_caret_up            = 0xf0d8,
    icon_caret_left          = 0xf0d9,
    icon_caret_right         = 0xf0da,
    icon_columns             = 0xf0db,
    icon_sort                = 0xf0dc,
    icon_sort_down           = 0xf0dd,
    icon_sort_up             = 0xf0de,

    icon_envelope_alt        = 0xf0e0,
    icon_linkedin            = 0xf0e1,
    icon_undo                = 0xf0e2,
    icon_legal               = 0xf0e3,
    icon_dashboard           = 0xf0e4,
    icon_comment_alt         = 0xf0e5,
    icon_comments_alt        = 0xf0e6,
    icon_bolt                = 0xf0e7,
    icon_sitemap             = 0xf0e8,
    icon_umbrella            = 0xf0e9,
    icon_paste               = 0xf0ea,
    icon_lightbulb           = 0xf0eb,
    icon_exchange            = 0xf0ec,
    icon_cloud_download      = 0xf0ed,
    icon_cloud_upload        = 0xf0ee,

    icon_user_md             = 0xf0f0,
    icon_stethoscope         = 0xf0f1,
    icon_suitcase            = 0xf0f2,
    icon_bell_alt            = 0xf0f3,
    icon_coffee              = 0xf0f4,
    icon_food                = 0xf0f5,
    icon_file_alt            = 0xf0f6,
    icon_building            = 0xf0f7,
    icon_hospital            = 0xf0f8,
    icon_ambulance           = 0xf0f9,
    icon_medkit              = 0xf0fa,
    icon_fighter_jet         = 0xf0fb,
    icon_beer                = 0xf0fc,
    icon_h_sign              = 0xf0fd,
    icon_plus_sign_alt       = 0xf0fe,

    icon_double_angle_left   = 0xf100,
    icon_double_angle_right  = 0xf101,
    icon_double_angle_up     = 0xf102,
    icon_double_angle_down   = 0xf103,
    icon_angle_left          = 0xf104,
    icon_angle_right         = 0xf105,
    icon_angle_up            = 0xf106,
    icon_angle_down          = 0xf107,
    icon_desktop             = 0xf108,
    icon_laptop              = 0xf109,
    icon_tablet              = 0xf10a,
    icon_mobile_phone        = 0xf10b,
    icon_circle_blank        = 0xf10c,
    icon_quote_left          = 0xf10d,
    icon_quote_right         = 0xf10e,

    icon_spinner             = 0xf110,
    icon_circle              = 0xf111,
    icon_reply               = 0xf112,
    icon_github_alt          = 0xf113,
    icon_folder_close_alt    = 0xf114,
    icon_folder_open_alt     = 0xf115
};


//---------------------------------------------------------------------------------------

class QtAwesomeIconPainter;

/// The main objet for creating icons.
/// This class requires a 2-phase construction
class QtAwesome : public QObject
{
Q_OBJECT

public:

    QtAwesome(QObject *parent );
    virtual ~QtAwesome();

    void init( const QString& fontname );
    bool initFontAwesome();

    void addNamedCodepoint( const QString& name, int codePoint );
    QHash<QString,int> namedCodePoints() { return namedCodepoints_; }

    void setDefaultOption( const QString& name, const QVariant& value  );
    QVariant defaultOption( const QString& name );

    QIcon icon( int character, const QVariantMap& options = QVariantMap() );
    QIcon icon( const QString& name, const QVariantMap& options = QVariantMap() );

    void give( const QString& name, QtAwesomeIconPainter* painter );

    /// Returns the font-name that is used as icon-map
    QString fontName() { return fontName_ ; }

private:
    QString fontName_;                                     ///< The font name used for this map
    QHash<QString,int> namedCodepoints_;                   ///< A map with names mapped to code-points

    QHash<QString, QtAwesomeIconPainter*> painterMap_;     ///< A map of custom painters
    QVariantMap defaultOptions_;                           ///< The default icon options
    QtAwesomeIconPainter* fontIconPainter_;                ///< A special painter fo painting codepoints
};


//---------------------------------------------------------------------------------------


/// The QtAwesomeIconPainter is a specialized painter for painting icons
/// your can implement an iconpainter to create custom font-icon code
class QtAwesomeIconPainter
{
public:
    virtual ~QtAwesomeIconPainter() {}
    virtual void paint( QtAwesome* awesome, QPainter* painter, const QRect& rect, QIcon::Mode mode, QIcon::State state, const QVariantMap& options ) = 0;
};



#endif // QTAWESOME_H