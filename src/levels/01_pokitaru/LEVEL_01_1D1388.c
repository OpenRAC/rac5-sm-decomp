/* LEVEL_01:0x1D1388 -- when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_00398920;
extern Entry D_00209030[];
extern char D_0022A8A0[];

extern void func_1D1080(char *record, long long value);
extern void func_06DF88(char *record);
extern void func_06E400(char *record);
extern void func_1D10D0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1D1388(void)
{
    unsigned int i;
    Rec *r;

    if (D_00398920.active) {
        for (i = 0; i < 3; i++) {
            r = &D_00398920.recs[i];
            func_1D1080((char *)r, D_00398920.value);
            func_06DF88((char *)r);
            if (IsMode3(r)) {
                func_06E400((char *)r);
                func_1D10D0((char *)r, &D_00209030[i], D_00398920.value, D_0022A8A0, 12);
            }
        }
    }
}
