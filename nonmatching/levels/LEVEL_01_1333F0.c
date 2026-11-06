/* LEVEL_01.REL:0x1333F0, bounded 200-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +50. Not linked into the accepted
 * gate or counted.
 * Reopen: The global D_...704C must be produced in $v1; the entry calls are ordered differently. Reopen by reordering the two entry calls and their result lifetimes.
 */
extern int D_0020704C;
extern unsigned char D_00207051;

void func_028038(void);
void func_0A7028(void);
int func_132BF8(int param);
int func_133128(void);
void func_0DB220(void);
void func_133230(void);
void func_133870(int param);

int func_1333F0(int param_1, int param_2)
{
    int value;
    unsigned char saved;

    func_028038();
    func_0A7028();
    if (D_0020704C != 0) {
        value = func_132BF8(1);
        if (value == 0) {
            value = func_133128();
            saved = D_00207051;
            if (value == -1) {
                D_00207051 = saved;
            } else {
                D_00207051 = 0;
                func_0DB220();
                func_133230();
                func_133870(param_2);
                *(int *)(D_0020704C + 4) = 8;
                *(int *)(D_0020704C + 0xC) = value;
                D_00207051 = saved;
                return 1;
            }
        }
    }
    return 0;
}
