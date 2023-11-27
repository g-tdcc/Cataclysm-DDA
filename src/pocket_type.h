#pragma once
#ifndef CATA_SRC_POCKET_TYPE_H
#define CATA_SRC_POCKET_TYPE_H

enum class pocket_type : int {
    CONTAINER,
    MAGAZINE,
    MAGAZINE_WELL, //holds magazines
    MOD, // the gunmods or toolmods
    CORPSE, // the "corpse" pocket - bionics embedded in a corpse
    SOFTWARE, // software put into usb or some such
    EBOOK, // holds electronic books for a device or usb
    CABLE, // pocket for storing power/data cables and handling their connections
    MIGRATION, // this allows items to load contents that are too big, in order to spill them later.
    LAST
};

#endif // CATA_SRC_POCKET_TYPE_H
