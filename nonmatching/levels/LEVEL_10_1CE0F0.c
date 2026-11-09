/* LEVEL_10.REL:0x1CE0F0: reviewed 68-byte candidate, held for ABI review.
 * Switches the object to state 2, clears its effect flag and runs the two
 * follow-up handlers.
 * pinned C with gnu-ee-trial links 68/68 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_12F2C8 returning void with (pointer), but the accepted
 * LEVEL_10_12F2C8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad[0xC6];
    unsigned char flag;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Sub *sub;
} Obj;

extern void func_07D188(Obj *obj, int mode, float t);
extern void func_12F2C8(Obj *obj);

void func_1CE0F0(Obj *obj)
{
    obj->state = 2;
    obj->sub->flag = 0;
    func_07D188(obj, 3, 0.0f);
    func_12F2C8(obj);
}
