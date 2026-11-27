/* USA LEVEL_03:1A25C0, 244-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 40 differing words; first difference +0x8. No matching credit.
 * Remaining issue: length now 244 (inline GetSel + k = 0x1B/0x14 then one func_19FDD0 call);
 * left: o/info s2/s1 swap, retail alt==0 arm copies s (daddu) and alt!=0 arm re-reads sel in a
 * bnel slot, and the 0x1B tail shared with the no-selection path
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_03:0x1A25C0 -- starts an action for the selected entry of an object. */
typedef struct {
    char pad0[0x45];
    unsigned char type;
    char pad1[0x64 - 0x46];
    unsigned flags;
} Ent;
typedef struct {
    char pad0[0x9D];
    unsigned char sel;
    char pad1;
    unsigned char alt;
    char pad2[0xE0 - 0xA0];
    Ent *tabA[6];
    Ent *tabB[6];
} Info;
typedef struct {
    char pad[0x54];
    Info *info;
} Obj;
extern int func_1A63F8(Ent *e);
extern void func_1A1C28(Obj *o);
extern void func_1A24F0(Obj *o);
extern void func_19FDD0(Obj *o, int a);

static __inline__ Ent *GetSel(Info *info)
{
    if (info->alt == 0)
        return info->tabA[info->sel];
    return info->tabB[info->sel];
}

int func_1A25C0(Obj *o)
{
    Info *info = o->info;
    unsigned s = info->sel;
    Ent *e;
    int k;

    if (s != 0xFF) {
        e = GetSel(info);
        if (func_1A63F8(e) == 0) {
            if ((unsigned)(e->type - 5) < 2) {
                if ((e->flags & 0x20) == 0)
                    return 0;
            }
        }
        func_1A1C28(o);
        if (info->sel == 0xFF) {
            func_1A24F0(o);
            k = 0x1B;
        } else {
            k = 0x14;
        }
        func_19FDD0(o, k);
        return 1;
    }
    func_1A1C28(o);
    if (info->sel != s)
        return 0;
    func_1A24F0(o);
    func_19FDD0(o, 0x1B);
    return 1;
}
