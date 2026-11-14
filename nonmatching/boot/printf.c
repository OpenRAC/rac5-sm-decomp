/* printf 0x01EC7138 (14 November 2026).
 * Measured prodg2953 as=ps2eeas: 12 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
struct _reent;
struct _FILE {
    unsigned char pad_0[0x54];
    struct _reent *_data;         /* 0x54 */
};

struct _reent {
    unsigned char pad_0[8];
    struct _FILE *_stdout;        /* 0x08 */
};

extern struct _reent *_impure_ptr;
extern int vfprintf(struct _FILE *fp, const char *fmt, void *ap);

int printf(const char *fmt, ...)
{
    char *ap = (char *)__builtin_next_arg(fmt) - 0x38;
    struct _FILE *fp;

    fp = _impure_ptr->_stdout;
    fp->_data = _impure_ptr;
    return vfprintf(_impure_ptr->_stdout, fmt, ap);
}
