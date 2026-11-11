/* LEVEL_15:0x0F86C8 -- walks six slots of a handler table and calls each slot's handler when present. */

struct Slot {
    void (*fn_00)(void);
    char pad_04[0x10];
};

struct Tab {
    char pad_00[8];
    struct Slot s[6];
};

extern struct Tab D_0016F480;

void func_0F86C8(void)
{
    int i;
    void (*fn)(void);

    for (i = 0; i < 6; i++) {
        fn = D_0016F480.s[i].fn_00;
        if (fn != 0) {
            fn();
        }
    }
}
