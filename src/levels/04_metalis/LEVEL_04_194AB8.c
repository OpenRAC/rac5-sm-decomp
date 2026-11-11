/* LEVEL_04:0x194AB8 -- looks up an asset by id, keeps it in a global and sets its two floats (+0x1C = 100.0, +0x18 = 20.0). */
extern char *D_00221CBC;
extern int func_1364E8(unsigned int value);

void func_194AB8(void)
{
    char *asset;

    asset = (char *)func_1364E8(0xBA90B2C0U);
    D_00221CBC = asset;
    *(float *)(D_00221CBC + 0x1C) = 100.0f;
    *(float *)(D_00221CBC + 0x18) = 20.0f;
}
