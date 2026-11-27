/* LEVEL_23:0x1A2D20 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
typedef struct Rec {
    char pad00[0x30];
    signed char mode;
    char pad31[0x68 - 0x31];
} Rec;

typedef struct State {
    Rec recs[3];
    unsigned char active;
    char pad139[3];
    int value;
} State;

typedef struct Entry {
    char pad[0x44];
} Entry;

extern State D_00366720;
extern Entry D_001DC2B0[];
extern char D_001F7CA8[];

extern void func_1A2A18(char *record, long long value);
extern void func_067730(char *record);
extern void func_067BA8(char *record);
extern void func_1A2A68(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1A2D20(void)
{
    unsigned int i;
    Rec *r;

    if (D_00366720.active) {
        for (i = 0; i < 3; i++) {
            r = &D_00366720.recs[i];
            func_1A2A18((char *)r, D_00366720.value);
            func_067730((char *)r);
            if (IsMode3(r)) {
                func_067BA8((char *)r);
                func_1A2A68((char *)r, &D_001DC2B0[i], D_00366720.value, D_001F7CA8, 12);
            }
        }
    }
}
