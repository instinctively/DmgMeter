#include "characterpattern.h"

using namespace GW2;

const QString CharacterPattern::s_Pattern = "0123456789";
const unsigned char CharacterPattern::s_PatternGrids[ImageAttributes::InterfaceSizeCount][ImageAttributes::ChatTextSizeCount][CHARACTERPATTERN_COUNT][CHARACTERPATTERN_MAX_HEIGHT][CHARACTERPATTERN_MAX_WIDTH] = {
    // Small interface size
    {
    },

    // Normal interface size
    {
        // Small text size
        {
        },

        // Medium text size
        {
            // 0
            {
                {0,1,1,1,0,0,0},
                {1,1,0,1,1,0,0},
                {1,0,0,0,1,0,0},
                {1,0,0,0,1,0,0},
                {1,0,0,0,1,0,0},
                {1,0,0,0,1,0,0},
                {1,0,0,0,1,0,0},
                {1,0,0,0,1,0,0},
                {1,1,0,1,1,0,0},
                {0,1,1,1,0,0,0}
            },

            // 1
            {
                {0,0,0,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,1,1,0,0,0},
                {1,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
            },

            // 2
            {
                {0,1,1,1,1,0,0},
                {0,1,0,0,1,1,0},
                {0,0,0,0,1,1,0},
                {0,0,0,0,1,1,0},
                {0,0,0,1,1,0,0},
                {0,0,0,1,1,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,1,1,0,0,0,0},
                {1,1,1,1,1,1,0},
            },

            // 3
            {
                {0,1,1,1,0,0,0},
                {1,0,0,1,1,0,0},
                {0,0,0,1,1,0,0},
                {0,0,0,1,1,0,0},
                {0,0,1,0,0,0,0},
                {0,0,0,1,1,0,0},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0},
                {1,0,0,1,1,0,0},
                {0,1,1,1,0,0,0},
            },

            // 4
            {
                {0,0,0,0,0,1,0},
                {0,0,0,0,1,1,0},
                {0,0,0,1,1,1,0},
                {0,0,1,1,1,1,0},
                {0,0,1,0,1,1,0},
                {0,1,0,0,1,1,0},
                {1,1,1,1,1,1,1},
                {0,0,0,0,1,1,0},
                {0,0,0,0,1,1,0},
                {0,0,0,0,1,1,0},
            },

            // 5
            {
                {1,1,1,1,1,0,0},
                {1,1,0,0,0,0,0},
                {1,1,0,0,0,0,0},
                {1,1,1,1,0,0,0},
                {1,0,0,0,1,0,0},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0},
                {0,0,0,1,1,0,0},
                {1,1,1,1,0,0,0},
            },

            // 6
            {
                {0,0,0,1,1,0,0},
                {0,0,1,1,0,0,0},
                {0,1,1,0,0,0,0},
                {0,1,1,0,0,0,0},
                {0,1,1,1,1,0,0},
                {1,1,0,0,1,1,0},
                {1,1,0,0,0,1,0},
                {0,1,0,0,0,1,0},
                {0,1,0,0,0,1,0},
                {0,0,1,1,1,0,0},
            },

            // 7
            {
                {1,1,1,1,1,1,0},
                {0,0,0,0,1,0,0},
                {0,0,0,1,1,0,0},
                {0,0,0,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,1,0,0,0},
                {0,0,1,0,0,0,0},
                {0,1,1,0,0,0,0},
                {0,1,0,0,0,0,0},
                {0,1,0,0,0,0,0},
            },

            // 8
            {
                {0,0,1,1,1,0,0},
                {0,1,1,0,0,1,0},
                {0,1,0,0,0,1,0},
                {0,1,1,0,1,1,0},
                {0,0,1,1,1,0,0},
                {0,1,1,0,1,1,0},
                {0,1,0,0,0,1,1},
                {1,1,0,0,0,1,1},
                {0,1,0,0,0,1,0},
                {0,1,1,1,1,0,0},
            },

            // 9
            {
                {0,0,1,1,1,0,0},
                {0,1,0,0,0,1,0},
                {1,1,0,0,0,1,0},
                {1,1,0,0,0,1,0},
                {0,1,0,0,0,1,0},
                {0,1,1,1,1,1,0},
                {0,0,0,0,1,1,0},
                {0,0,0,0,1,0,0},
                {0,0,0,1,1,0,0},
                {0,0,1,1,0,0,0},
            }
        }
    }
};


const unsigned char CharacterPattern::s_ControlPatternGrids[ImageAttributes::InterfaceSizeCount][CHARACTERPATTERN_CONTROL_COUNT][CHARACTERPATTERN_CONTROL_MAX_HEIGHT][CHARACTERPATTERN_CONTROL_MAX_WIDTH] = {
    // Small interface size
    {
    },

    // Normal interface size
    {
        // Speechbubble visible
        {
            {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
            {0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0},
            {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },

        // Speechbubble hidden
        {
            {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0},
            {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
            {0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},
            {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },

        // Scrollbar arrow down
        {
            {1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        },
    }
};
