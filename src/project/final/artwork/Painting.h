#ifndef BHCC_CPP_PAINTING_H
#define BHCC_CPP_PAINTING_H

#include "Artwork.h"
#include "../util/Dimensions.h"

class Painting : public Artwork {
public:
    enum Medium {
        OIL, ACRYLIC, MIXED_MEDIA, WATERCOLOR
    };

    static int numberOfPaintings;
    static const std::string mediumString[4];
private:
    Medium medium;
    Dimensions dimensions;
public:
    Painting(Name artist, Date created, Date acquired, Name donatedBy, Medium medium, Dimensions dimensions);

    const Medium getMedium() const { return medium; }

    const Dimensions getDimensions() const { return dimensions; }

    double value() override;

    std::string toString() override;
};

std::string toMediumString(Painting::Medium medium);

#endif