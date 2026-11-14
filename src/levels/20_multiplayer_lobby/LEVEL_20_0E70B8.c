/* LEVEL_20:0x0E70B8 -- placement copy of LEVEL_16_114718.c: returns 1 when the value appears in the first word of one of the four 32-byte table entries. */
typedef struct {
    int id;
    char pad04[0x1C];
} Ent;

extern Ent D_00202B68[];

int func_0E70B8(int value)
{
    unsigned int i;
    Ent *e = D_00202B68;

    for (i = 0; i < 4; i++) {
        if (e->id == value) {
            return 1;
        }
        e++;
    }
    return 0;
}
