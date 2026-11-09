/* LEVEL_01.REL:0x0C3D20: reviewed 240-byte candidate, held for ABI review.
 * Reads four shorts from a query buffer, configures a global object, and runs
 * a follow-up.
 * pinned C with gnu-ee-trial links 240/240 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Glob {
    char pad0[0x20];
    unsigned int w20;
    char pad1[0x39 - 0x24];
    unsigned char b39;
} Glob;

extern Glob D_00329258;
extern int D_0020038C;
extern char D_00212E88[];

extern void func_0AE708(int, void *, float);
extern int func_0A8680(void *);
extern int func_0A86B0(void *);
extern int func_0A86E0(void *);
extern int func_0A8798(void *);
extern void func_0AB3E0(Glob *, int, int, int, int, unsigned int);
extern int func_0A63E0(int);
extern void func_133DD8(int, char *, int);
extern void func_0C3E38(void);

void func_0C3D20(void)
{
    int buf[4];
    int r0, r1;
    func_0AE708(0x203, buf, 0.0f);
    func_0AB3E0(&D_00329258, (short)func_0A8680(buf), (short)func_0A86B0(buf),
                (short)func_0A86E0(buf), (short)func_0A8798(buf), 0x40602020);
    D_00329258.w20 |= 0x840;
    D_00329258.b39 = 0;
    r0 = func_0A63E0(0);
    r1 = func_0A63E0(1);
    D_0020038C = r1;
    func_133DD8(0, D_00212E88, r0);
    func_0C3E38();
}
