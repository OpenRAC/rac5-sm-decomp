/* USA LEVEL_04.REL:0x1F4D40, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 188 linked bytes; first differing word +0x10.
 * Unaccepted; no matching credit. Recover the angle-helper expression and floating temporary lifetimes; the named floorf import is preserved in this retained attempt.
 */
typedef struct Quat { float x,y,z,w; } Quat;
extern float floorf(float x);
extern float D_231808[];
extern void func_12EF90(float *out, float *in, float angle);
extern char *func_08F140(int index);
extern void func_12EB30(Quat *out, Quat *first, Quat *second);
void func_1F4D40(float *amount, int mode)
{
    Quat rotation;
    float angle;
    float scale;
    float square;
    char *target;
    if (*amount <= 0.0f)
        return;
    square = *amount * *amount;
    scale = mode ? 6.283185482025146484375f : 18.84955596923828125f;
    angle = scale - square * scale;
    angle -= floorf(angle * 0.15915493667125701904296875f + 0.5f) * 6.283185482025146484375f;
    func_12EF90((float *)&rotation, D_231808, angle);
    target = func_08F140(0);
    func_12EB30((Quat *)target, &rotation, (Quat *)target);
}
