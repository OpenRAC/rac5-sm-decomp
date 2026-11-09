/* FRONTEND.REL:0x023808: reviewed 88-byte candidate, held for ABI review.
 * Copies two 64-bit arguments, calls a helper pair and a final call.
 * sdk991111 C with gnu-ee-trial links 88/88 bytes and is byte-exact at this
 * and 20 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_023528(long long *, char *);
extern long long func_0235C8(char *, char *, char *);
extern void func_0233F8(long long);

void func_023808(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_023528(&a, left);
    func_023528(&b, right);
    value = func_0235C8(left, right, output);
    func_0233F8(value);
}
