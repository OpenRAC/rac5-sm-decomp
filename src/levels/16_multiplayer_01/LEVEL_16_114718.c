/* LEVEL_16:0x114718 -- returns 1 when the value appears in the first word of one of the four 32-byte table entries. */
typedef struct {
    int id;
    char pad04[0x1C];
} Ent;

extern Ent D_002DF608[];

int func_114718(int value)
{
    unsigned int i;
    Ent *e = D_002DF608;

    for (i = 0; i < 4; i++) {
        if (e->id == value) {
            return 1;
        }
        e++;
    }
    return 0;
}
