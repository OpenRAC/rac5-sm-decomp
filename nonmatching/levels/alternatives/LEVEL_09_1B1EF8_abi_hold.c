/* LEVEL_09.REL:0x1B1EF8: reviewed 80-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_1CB9D8.c.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_121EE8 returning void with (pointer, int, int, float,
 * float, float), but the accepted LEVEL_01_128F50.c defines it returning void
 * with (pointer, pointer, pointer, float, float, float).
 * It declares func_030DD8 returning void with (int, pointer, pointer), but the
 * accepted LEVEL_09_030DD8.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_01:1CB9D8 -- builds a temporary frame from the source vector, hands
   it to func_030DD8 and returns the address of the +0x70 member. */
typedef struct {
    char pad_00[0x2C];
    float f_2C;
} Src;

void func_121EE8(char *buf, int a1, int a2, float x, float y, float z);
void func_030DD8(int a0, char *buf, char *tail);

char *func_1B1EF8(int a0, int a1, int a2, Src *a3, int a4)
{
    char buf[0x30];

    func_121EE8(buf, 0, a4, a3->f_2C, a3->f_2C, a3->f_2C);
    func_030DD8(a0, buf, buf + 0x24);
    return (char *)(a0 + 0x70);
}
