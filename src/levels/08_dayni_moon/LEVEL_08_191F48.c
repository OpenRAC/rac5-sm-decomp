/* LEVEL_08:0x191F48 -- placement copy of LEVEL_01_179318.c: arms a pickup: fails when its definition holds no payload, marks the object (unless it is the current focus) and packs the four definition bytes into the object's colour word. */
typedef struct Focus {
    char pad_00[0x0C];
    char *owner;
} Focus;

extern Focus *D_00250D0C;

int func_191F48(char *obj)
{
    unsigned char *rec;
    unsigned int w;

    rec = *(unsigned char **)(obj + 0x54);
    if (D_00250D0C->owner == obj) {
        if (*(int *)(rec + 0xC) == 0) {
            return 0;
        }
    } else {
        if (*(int *)(rec + 0xC) == 0) {
            return 0;
        }
        *(unsigned int *)(obj + 0x64) |= 0x10;
    }
    w = rec[3] << 24;
    w |= rec[2] << 16;
    w |= rec[1] << 8;
    w |= rec[0];
    *(unsigned int *)(obj + 0x68) = w;
    return 1;
}
