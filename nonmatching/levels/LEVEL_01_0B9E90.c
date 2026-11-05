/* USA LEVEL_01.REL:0x0B9E90. Retained nonmatching UI-state hypothesis.
 * Pinned GNU EE with -mno-check-zero-division links 200/200 bytes;
 * the first difference is at body byte 118 (register allocation).
 * The local helper's integer return is supported by retail arithmetic at
 * its callers. A separate corrected helper C retains all 21 exact poses.
 */
typedef struct {
    char pad00[0x50];
    int top;
    int bottom;
    int left;
    int right;
    char pad60[0x20];
    int copied_top;
    int computed;
    int top_again;
    int bottom_again;
    int right_minus_16;
    int right_again;
    int mode;
    unsigned char clear_flag;
    char pad9d[3];
    int triple;
} UiState;

extern int func_0B9D10(const void *state);

int func_0B9E90(UiState *state, short left, short top, short right, short bottom)
{
    int divisor;
    int scale;

    state->bottom = bottom;
    state->top = top;
    state->right = right;
    state->copied_top = top;
    state->left = left;
    divisor = func_0B9D10(state);
    scale = func_0B9D10(state);
    state->triple = 3;
    state->bottom_again = bottom;
    state->top_again = top;
    state->right_again = right;
    state->right_minus_16 = right - 16;
    state->mode = 2;
    state->clear_flag = 0;
    state->computed = ((bottom - top) / divisor) * scale + top;
    return 1;
}
