/* LEVEL_10.REL:0x19B498: reviewed 68-byte candidate.
 * Records the id in the object's state, then starts it with a positive
 * duration or stops it at zero.
 * pinned C with gnu-ee-trial links 68/68 bytes; first differs at +4.
 * The retail materialises the floating-point zero in the second float argument
 * register, the compiler in the return register; no caller or definition yet
 * shows a second float parameter (pinned and gnu-ee-trial measured; sdk991111
 * differs more).
 * Retry: Establish the callee float parameters from an accepted caller or
 * definition.
 * No matching credit.
 */
typedef struct {
    char pad[0xF8];
    int id;
} State;

typedef struct {
    char pad[0x58];
    State *state;
} Obj;

extern void func_07D358(Obj *obj, int id, int a2, int a3, float t);
extern void func_07D188(Obj *obj, int id, float t);

void func_19B498(Obj *obj, int id, float t)
{
    obj->state->id = id;
    if (t > 0.0f)
        func_07D358(obj, id, 0, 1, t);
    else
        func_07D188(obj, id, 0.0f);
}
