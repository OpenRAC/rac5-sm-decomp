/* FRONTEND.REL:0x0232F8: Ghidra body 152 bytes.
 * Pinned pure C links 140 bytes and first differs at +0.
 * Recheck signed 64-bit conversion and the double helper prototypes. No matching credit.
 */
extern double func_023E40(int);
extern double func_0238C8(double, double);
extern double func_023808(double, double);

double func_0232F8(long long value)
{
    int high_word = (int)(value >> 32);
    int low_word = (int)value;
    double high = func_023E40(high_word);
    double low;
    high = func_0238C8(high, 65536.0);
    high = func_0238C8(high, 65536.0);
    low = func_023E40(low_word);
    if (low_word < 0)
        low = func_023808(low, 4294967296.0);
    return func_023808(high, low);
}
