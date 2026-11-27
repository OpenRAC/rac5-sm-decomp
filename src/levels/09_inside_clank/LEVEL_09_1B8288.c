/* LEVEL_09:0x1B8288 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_00380108;
extern Entry D_001F2CB0[];
extern char D_00212010[];

extern void func_1B7F80(char *record, long long value);
extern void func_06AB88(char *record);
extern void func_06B000(char *record);
extern void func_1B7FD0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1B8288(void)
{
    unsigned int i;
    Rec *r;

    if (D_00380108.active) {
        for (i = 0; i < 3; i++) {
            r = &D_00380108.recs[i];
            func_1B7F80((char *)r, D_00380108.value);
            func_06AB88((char *)r);
            if (IsMode3(r)) {
                func_06B000((char *)r);
                func_1B7FD0((char *)r, &D_001F2CB0[i], D_00380108.value, D_00212010, 12);
            }
        }
    }
}
