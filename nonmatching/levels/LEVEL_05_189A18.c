/* USA LEVEL_05:189A18, 252-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link; local declarations still conflict with accepted definitions or
 * callers. No matching credit.
 * Remaining issue: the high-part pattern is GCC expand_assignment: a plain global = call()
 * expands the call first (fresh lui after it), while an assignment with a conversion (D_001F780C
 * unsigned = int func_1C38A8; D_001F7814 = (Res *) void * result) expands the destination first,
 * so its high part lives across the call in a saved register; D_001F7814 as a one-element array
 * (extern Res *D_001F7814[1]) gives the retail reload between the two float stores; mode read
 * into a local first fixes v1/a1. CONFLICT: accepted LEVEL_05_0FCC38 is void, retail stores its
 * v0 here (its tail func_094218 result) - should return int
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_05:0x189A18 -- registers the effect resources: packs the id fields into the shared word, stores the handles and sets the size of the third one. */
typedef struct {
    char pad00[0x1C];
    unsigned int id;
    char pad20[0xAC];
    unsigned int mode;
} Cfg;

typedef struct {
    char pad00[0x18];
    float w;
    float h;
} Res;

extern Cfg D_00283C80;
extern unsigned int D_001F7804;
extern unsigned int D_001F7808;
extern unsigned int D_001F780C;
extern void *D_001F7810;
extern Res *D_001F7814[1];
extern void *D_001F7818;
extern unsigned int func_0FCC38(unsigned int a);
extern int func_1C38A8(unsigned int value);
extern void *func_1259E0(unsigned int hash);

void func_189A18(void)
{
    unsigned int mode;

    mode = D_00283C80.mode;
    D_001F7804 = (D_001F7804 & 0xF800FFFF) | (D_00283C80.id << 16);
    D_001F7808 = func_0FCC38((mode << 16) | 0xC0001041);
    D_001F780C = func_1C38A8((D_001F7804 & 0xF800FFFF) | (D_00283C80.id << 16));
    D_001F7810 = func_1259E0(0xFA0D0516);
    D_001F7814[0] = (Res *)func_1259E0(0x88742A40);
    D_001F7818 = func_1259E0(0x3DE23313);
    if (D_001F7814[0] != 0) {
        D_001F7814[0]->h = 50.0f;
        D_001F7814[0]->w = 50.0f;
    }
}
