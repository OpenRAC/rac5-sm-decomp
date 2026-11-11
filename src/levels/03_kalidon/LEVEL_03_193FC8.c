/* LEVEL_03:0x193FC8 -- on the reset request, rebuilds two global tuning tables from constant initializers. */
typedef struct {
    int z0;
    int z4;
    int z8;
    float one;
} Head;

typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C, f20;
    int i24;
    unsigned char b28;
    float f2C, f30, f34, f38, f3C;
    float f40;
    int i44;
    unsigned char b48, b49;
    float f4C, f50, f54, f58;
    int i5C;
    unsigned char b60;
    float f64, f68, f6C, f70, f74;
    unsigned c78;
    int i7C;
    unsigned char b80;
    float f84, f88, f8C, f90;
    int i94, i98, i9C;
} CfgA;

typedef struct {
    unsigned c00, c04, c08, c0C;
    int i10, i14;
    float f18, f1C, f20, f24, f28, f2C, f30, f34, f38, f3C, f40, f44;
    unsigned char b48, b49;
} CfgB;

extern Head D_003B1C10;
extern CfgA D_003B1C20;
extern CfgB D_003B1CC0;
extern float powf(float, float);

void func_193FC8(int a, int b)
{
    if (b == 0xFFFF && a != 0) {
        D_003B1C10.z0 = 0;
        D_003B1C10.z4 = 0;
        D_003B1C10.z8 = 0;
        D_003B1C10.one = 1.0f;
        {
            D_003B1C20 = (CfgA){
                f00: 0.009999999776482582f, f04: 0.20000001788139343f, f08: 0.30000001192092896f, f0C: 0.6000000238418579f,
                f10: 0.004999999888241291f, f14: powf(0.9700000286102295f, 1.0f), f18: 30.00059700012207f, f1C: 22.50044822692871f,
                f20: 3.0000596046447754f, i24: 1, b28: 1,
                f2C: 4.0f, f30: 5.0f, f34: 10.000199317932129f, f38: 2.5000498294830322f,
                f40: 0.004999999888241291f, i44: 2, b48: 1, b49: 1,
                f4C: 0.20000001788139343f, f50: 1.0f, f54: 0.20000000298023224f, f58: 0.5f,
                i5C: 3, b60: 1,
                f64: 0.019999999552965164f, f68: 0.07999999821186066f, f6C: 0.5f, f70: 30.00059700012207f, f74: 20.000398635864258f,
                c78: 0x80606060, i7C: 3, b80: 1,
                f84: 0.699999988079071f, f88: 0.4000000059604645f, f8C: 0.0010000000474974513f, f90: 2.5000498294830322f,
                i98: 20
            };
        }
        {
            D_003B1CC0 = (CfgB){
                c00: 0xAA666666, c04: 0xBB888888, c08: 0x00DDDDDD, c0C: 0x00FFFFFF, i10: 15, i14: 30,
                f18: 0.06666667014360428f, f1C: 0.05000000447034836f, f20: 20.0f, f24: 0.029999999329447746f,
                f28: 0.05000000074505806f, f2C: 0.6000000238418579f, f30: 0.800000011920929f,
                f34: 0.05235988274216652f, f38: 0.10471976548433304f, f3C: 0.39269909262657166f,
                f40: powf(0.8999999761581421f, 1.0f), f44: powf(0.949999988079071f, 1.0f),
                b49: 2
            };
        }
    }
}
