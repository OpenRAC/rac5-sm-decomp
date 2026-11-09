/* LEVEL_16.REL:0x015D78: reviewed 316-byte candidate, held for ABI review.
 * Level setup: registers two resource blocks with their sources and then runs
 * the fixed list of subsystem init calls.
 * pinned C with gnu-ee-trial links 316/316 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_10F090 returning void with (pointer, pointer, pointer,
 * int), but the accepted FRONTEND_01F700.c defines it returning int with
 * (pointer, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Info;

extern char D_001E4090[];
extern Info *D_001A1AB4;
extern char D_002D5BC0[];
extern char D_002D5C08[];
extern char D_0029FBC0[];
extern char D_002CDBC0[];
extern char D_001C0DA8[];
extern char D_001C0DC8[];
extern char D_001A9F48[];

extern void func_09EFF0(void);
extern void func_09E360(char *p);
extern void func_10FD98(int n);
extern void func_10F090(char *a, char *b, char *c, int n);
extern int func_10F628(char *a, unsigned char b, int c);
extern void func_10F568(char *a, char *b);
extern void func_015830(void);
extern int func_024EA8(int a, int b);
extern void func_019408(int a);
extern void func_033B68(void);
extern void func_087438(void);
extern void func_089070(void);
extern void func_08E990(void);
extern void func_031A50(void);
extern void func_113000(void);

void func_015D78(void)
{
    int t;
    int r;
    char *p;
    char loc[0x40];

    t = 0;
    func_09EFF0();
    p = D_001E4090;
    func_09E360(p + 0x30);
    func_10FD98(1);
    if (D_001A1AB4 != 0) {
        t = D_001A1AB4->w_3C;
    }
    func_10F090(D_002D5BC0, D_0029FBC0, D_001C0DA8, 0x2E000);
    if (func_10F628(D_002D5BC0, t, 1) != 0) {
        func_10F568(D_002D5BC0, D_001A9F48);
    }
    func_10F090(D_002D5C08, D_002CDBC0, D_001C0DC8, 0x8000);
    if (func_10F628(D_002D5C08, t, 0) != 0) {
        func_10F568(D_002D5C08, loc);
    }
    func_015830();
    r = func_024EA8(0x90, 0xFF);
    if (r != 0) {
        func_019408(r);
    }
    func_033B68();
    func_087438();
    func_089070();
    func_08E990();
    func_031A50();
    func_113000();
}
