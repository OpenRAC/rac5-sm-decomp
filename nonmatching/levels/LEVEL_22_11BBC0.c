/* LEVEL_22.REL:0x11BBC0: reviewed 68-byte candidate.
 * When the timer has run out, signals the object with a mode chosen by its sub
 * record's flag.
 * pinned C with gnu-ee-trial links 68/68 bytes; first differs at +28.
 * Every measured form selects between modes 1 and 2 with a conditional move,
 * while the retail keeps a branch with a filled delay slot (if/assign, two
 * calls, gnu-ee-trial, gnu-ee-trial-divpad and sdk991111 measured).
 * Retry: A natural source shape whose two outcomes do not reduce to a
 * conditional move.
 * No matching credit.
 */
typedef struct {
    char pad[0x1D];
    unsigned char flag;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char index;
    char pad46[0xE];
    Sub *sub;
    char pad58[0x18];
    float timer;
} Obj;

extern void func_11B0C8(Obj *, int, int);

void func_11BBC0(Obj *obj)
{
    if (obj->timer <= 0.0f)
        func_11B0C8(obj, obj->index, obj->sub->flag ? 1 : 2);
}
