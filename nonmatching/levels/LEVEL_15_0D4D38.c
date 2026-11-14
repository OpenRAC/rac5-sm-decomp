/* USA LEVEL_15.REL:0x0D4D38, 104-byte candidate (14 November 2026).
 * Measured sdk991111: 11 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef char *va_list;

extern int vsnprintf(char *buf, unsigned int size, const char *fmt, va_list ap);
extern void func_0D4C70(void *o, char *text);

void func_0D4D38(void *o, const char *fmt, ...)
{
    char buf[256];
    va_list ap;

    ap = (char *)__builtin_next_arg(fmt)
         - (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8);
    vsnprintf(buf, 256, fmt, ap);
    func_0D4C70(o, buf);
}
