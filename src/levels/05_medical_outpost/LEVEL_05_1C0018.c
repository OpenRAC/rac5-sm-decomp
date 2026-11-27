/* LEVEL_05:0x1C0018 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_0038FCA0;
extern Entry D_001F7FA0[];
extern char D_00216518[];

extern void func_1BFD10(char *record, long long value);
extern void func_06BBF0(char *record);
extern void func_06C068(char *record);
extern void func_1BFD60(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1C0018(void)
{
    unsigned int i;
    Rec *r;

    if (D_0038FCA0.active) {
        for (i = 0; i < 3; i++) {
            r = &D_0038FCA0.recs[i];
            func_1BFD10((char *)r, D_0038FCA0.value);
            func_06BBF0((char *)r);
            if (IsMode3(r)) {
                func_06C068((char *)r);
                func_1BFD60((char *)r, &D_001F7FA0[i], D_0038FCA0.value, D_00216518, 12);
            }
        }
    }
}
