/* FRONTEND.REL:0x006120, bounded 56-byte candidate.
 * Isolated pinned C object: 56 bytes; first linked difference
 * at body byte +2. Not linked into the accepted gate or counted.
 * Reopen: Recover the state-table base and index register lifetimes across the three updates.
 */
extern char D_0010EA90[];

void func_006120(int new_index)
{
    int old_index = *(int *)(D_0010EA90 + 4);
    int old_value = *(int *)(D_0010EA90 + 0x10);
    int *array = (int *)(D_0010EA90 + 0x14);
    array[old_index] = old_value;
    *(int *)(D_0010EA90 + 4) = new_index;
    *(int *)(D_0010EA90 + 0x10) = array[new_index];
}
