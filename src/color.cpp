#include "color.h"

namespace colors
{
    Color::Color(float r, float g, float b)
    {
        red = r;
        green = g;
        blue = b;
    }

    void Color::SetRed(float r)
    {
        red = r;
        HSVNeedReset = true;
    }
    float Color::GetRed()
    {
        return red;
    }
    void Color::SetBlue(float b)
    {
        blue = b;
        HSVNeedReset = true;
    }
    float Color::GetBlue()
    {
        return blue;
    }
    void Color::SetGreen(float g)
    {
        green = g;
        HSVNeedReset = true;
    }
    float Color::GetGreen()
    {
        return blue;
    }

    float Color::GetHue()
    {
        return h;
    }

    void Color::SetHue(float h)
    {
        float minimum, maximum, delta;

        // Get minimum
        minimum = min(green, red);
        minimum = min(minimum, blue);

        // Get maximum
        maximum = max(green, red);
        maximum = max(maximum, blue);

        delta = maximum - minimum;

        v = maximum;
        if (maximum != 0)
        {
            s = delta / maximum;
        }
        else
        {
            s = 0;
            h = -1;
            return;
        }
        if (red == maximum) h = (green - blue) / delta;
        else if (green == maximum) h = 2 + (blue - red) / delta;
        else h = 4 + (red - green) / delta;
        h *= 60;

        if (h < 0)
        {
            h += 360;
        }
    }

    void RecomputeHSV()
    {
        
    }
}