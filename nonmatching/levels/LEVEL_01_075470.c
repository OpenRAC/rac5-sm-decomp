/* LEVEL_01.REL:0x075470, bounded 160-byte candidate.
 * Isolated pinned C object: 156 bytes; first linked
 * difference at body byte +8. Not linked into the accepted
 * gate or counted.
 * Reopen: The stack frame is too small (0x10 + 8) and the initialization order differs. Reopen with the measured frame and store order.
 */
extern int D_001F60C8[];
extern int D_0023A070[];

float floorf(float x);
void func_0E15B8(float a, float b, void *c, void *d, int e);

void func_075470(float param_1, int param_2)
{
    struct {
        int value;
        float scale;
        int *table;
    } first;
    struct {
        int state;
        int zero;
    } second;
    float count;

    first.value = param_2;
    first.scale = 0.0872f;
    first.table = D_0023A070;
    count = floorf(param_1 + 1.0f);
    if (0.0f < count) {
        second.state = D_001F60C8[0];
        second.zero = 0;
        func_0E15B8(1.0f - param_1, 1.0f, &second, &first, (int)count);
    }
}
