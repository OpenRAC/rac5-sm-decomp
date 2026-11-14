/* LEVEL_19:0x114EC0 -- placement copy of LEVEL_16_114718.c: returns 1 when the value appears in the first word of one of the four 32-byte table entries. */
typedef struct {
    int id;
    char pad04[0x1C];
} Ent;

extern Ent D_002DF788[];

int func_114EC0(int value)
{
    unsigned int i;
    Ent *e = D_002DF788;

    for (i = 0; i < 4; i++) {
        if (e->id == value) {
            return 1;
        }
        e++;
    }
    return 0;
}
