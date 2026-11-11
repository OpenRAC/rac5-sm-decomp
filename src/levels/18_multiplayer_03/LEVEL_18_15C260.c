/* LEVEL_18:0x15C260 -- stores the owner and looks up five hashed handles into globals, then seeds the last one with two default values. */
extern int D_001BF23C;
extern int D_001BF240;
extern int D_001BF244;
extern int D_001BF248;
extern int D_001BF24C;
extern int D_001BF250;
extern float D_001BF258;
extern float D_001BF25C;

extern int func_105B48(unsigned int value);

void func_15C260(int owner)
{
    D_001BF23C = owner;
    D_001BF248 = func_105B48(0xCCB3FBD0u);
    D_001BF244 = func_105B48(0x4F745A8Cu);
    D_001BF240 = func_105B48(0xA2C2A04Cu);
    D_001BF24C = func_105B48(0x4604CCABu);
    D_001BF250 = func_105B48(0xD33AFA68u);
    if (D_001BF250 != 0) {
        *(float *)(D_001BF250 + 0x18) = D_001BF258;
        *(float *)(D_001BF250 + 0x1C) = D_001BF25C;
    }
}
