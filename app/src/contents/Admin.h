/**
 * Tatoeba wiki  Wiki made with cppcmsskel
 *
 * Copyright (C) 2013 Allan SIMON <allan.simon@supinfo.com>
 * See accompanying file COPYING.TXT file for licensing details.
 *
 * @category Tatoeba wiki
 * @package  Contents
 * @author   Allan SIMON <allan.simon@supinfo.com>
 * @link     https://github.com/allan-simon/tatowiki
 */

#ifndef TATOWIKI_CONTENTS_ADMIN_H
#define TATOWIKI_CONTENTS_ADMIN_H

#include "contents/BaseContent.h"

#include "contents/forms/change_brand.h"
//%%%NEXT_CONTENT_FORM_INCLUDE_MARKER%%%

namespace contents {
namespace admin {

/**
 * @class Admin
 * @brief Base content for every action of Admin controller
 * @since 10 August 2013
 */
struct Admin : public tatowiki::contents::BaseContent {
};

/**
 * @struct ChangeBrand Contains the information to show a form to change
 *                     the wiki's brand
 * @since  14 August 2013
 */
struct ChangeBrand : public Admin {

    forms::admin::ChangeBrand changeBrandForm;

    /**
     * @brief Constructor
     */
    ChangeBrand() {
    }

};

//%%%NEXT_CONTENT_MARKER%%%

} // end of namespace admin
} //end of namespace contents

#endif
