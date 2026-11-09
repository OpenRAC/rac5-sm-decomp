/* LEVEL_01.REL:0x0D60B8: reviewed 412-byte candidate, held for ABI review.
 * Handles menu input flags and stores the refreshed state.
 * pinned C with gnu-ee-trial links 412/412 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_088020 returning int with (int), but the accepted
 * LEVEL_01_088020.c defines it returning int with (long long).
 * It declares func_0D6020 returning void with (int), but the accepted
 * LEVEL_01_0D6020.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Item { char pad0[0xCC]; unsigned char enabled; char padCD[3]; int kind; } Item;
typedef struct Menu { Item **items; char pad4[4]; int cur; char padC[0x10]; int result; } Menu;

extern Menu D_00205538;
extern char D_001FCA30[];
extern char D_0020526C;
extern int func_088020(int a);
extern int func_0D6A68(void);
extern void func_0D6020(int a);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern void func_0D5FC8(int a);
extern int func_0BBD30(void);
extern void func_0C94C8(int a);
extern void func_0BCA80(int a);
extern void func_0B96A8(Menu *m, int a);
extern int func_0B2AB8(char *p);

void func_0D60B8(void)
{
    int flags;
    int k;
    Item *it;

    flags = func_088020(0x6B10);
    if (func_0D6A68()) {
        func_0D6020(flags);
    } else if (flags & 0x1008) {
        func_0B6020(0);
        goto cancel;
    } else if (flags & 0x4000) {
        if (D_00205538.items[D_00205538.cur]->enabled) {
            func_0B6020(1);
            if (D_00205538.items[D_00205538.cur]->kind == 0) {
cancel:
                func_0B6020(7);
                func_01A828(4, 0);
            } else {
                func_0B6020(6);
                it = D_00205538.items[D_00205538.cur];
                if (it->enabled) {
                    k = it->kind;
                    if (k == 0x64) {
                        D_0020526C = 1;
                        func_0D5FC8(0x2A7);
                    } else if (k == 0x65) {
                        D_0020526C = 0;
                        func_0D5FC8(0x2A8);
                    } else if (k == 6) {
                        func_0C94C8(func_0BBD30());
                        func_0BCA80(6);
                    }
                }
            }
        }
    } else {
        func_0B96A8(&D_00205538, flags);
    }
    D_00205538.result = func_0B2AB8(D_001FCA30);
}
