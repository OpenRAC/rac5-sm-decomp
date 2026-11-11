/* FRONTEND:0x006120 -- swaps a state-table slot: stores the current value at the old index and loads the new one. */
extern char D_0010EA90[];

void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int new_index)
{
    int *state;
    int *slots;

    state = (int *)D_0010EA90;
    slots = state + 5;
    slots[state[1]] = state[4];
    state[1] = new_index;
    state[4] = slots[new_index];
}
