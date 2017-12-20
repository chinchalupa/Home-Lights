#include "application.h"

namespace colors
{
    class Color
    {
    private:
        float red, green, blue;
        float h;
        float s, v;
        bool HSVNeedReset;

        void RecomputeHSV();
        void RecomputeRGB();

    public:
        Color(float r, float g, float b);
        float GetRed();
        void SetRed(float r);
        float GetGreen();
        void SetGreen(float g);
        float GetBlue();
        void SetBlue(float b);
        float GetHue();
        void SetHue(float h);
        float GetSaturation();
        void SetSaturation(float s);
        float GetValue();
        void SetValue(float v);
        float *RGBAsArray();
    };
}
