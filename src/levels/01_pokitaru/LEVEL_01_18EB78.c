/* LEVEL_01:0x18EB78 -- runs the state change helper for the object unless its kind byte is 0xE or 0xF; returns 0. */
extern void func_18EBB0(char *object, int kind, int code);

int func_18EB78(char *object)
{
    if (*(unsigned char *)(object + 0x45) != 0xE && *(unsigned char *)(object + 0x45) != 0xF) {
        func_18EBB0(object, *(unsigned char *)(object + 0x45), 0x11);
    }
    return 0;
}
