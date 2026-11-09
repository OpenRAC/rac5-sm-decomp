/* LEVEL_15.REL:0x137288: reviewed 84-byte candidate.
 * Adds an integer to a stored float, caps the sum at 100.0, and stores it
 * back.
 * pinned C with gnu-ee-trial links 84/84 bytes; first differs at +36 (1
 * words).
 * Only the form of one stack temporary address differs; the rest of the body
 * is exact under pinned and gnu-ee-trial.
 * Retry: Recover the temporary type or alignment that reproduces the retail
 * address computation.
 * No matching credit.
 */
struct Obj {
    char pad_00[0x2C];
    float f_2C;
};

extern struct Obj D_002F4F88;

void func_137288(int a0)
{
    float tmp[2];
    float *p;
    float sum;

    sum = D_002F4F88.f_2C + (float)a0;
    tmp[1] = 100.0f;
    p = &tmp[1];
    tmp[0] = sum;
    if (sum < 100.0f) {
        p = &tmp[0];
    }
    D_002F4F88.f_2C = *p;
}
