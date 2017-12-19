class Color
{
    private:
        float red, green, blue;
        float h;
        float s, v;
    public:
        Color(float r, float g, float b) : red(r), green(g), blue(b) {};
        float GetRed();
        float GetGreen();
        float GetBlue();
        float GetHue();
        float GetSaturation();
        float GetValue();
};