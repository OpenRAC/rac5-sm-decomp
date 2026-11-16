"""Local documentation checks need no game inputs or third-party parser."""

import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import check_doc_links as checker


class DocLinkTests(unittest.TestCase):
    def test_inline_images_nested_labels_and_titles(self):
        text = '[a [nested] label](src/a(b).c "title") ![image](<docs/a b.svg>)'
        self.assertEqual(list(checker.links(text)),
                         [(1, "src/a(b).c"), (1, "docs/a b.svg")])

    def test_references_are_resolved_only_when_used(self):
        text = ('[Full][Some ID]\n[Some ID][]\n[Some ID]\n'
                '[some id]: docs/a.md "title"\n[unused]: missing.md\n')
        self.assertEqual(list(checker.links(text)), [(1, "docs/a.md"),
                         (2, "docs/a.md"), (3, "docs/a.md")])

    def test_code_comments_and_escaped_links_are_ignored(self):
        text = ('```md\n[x](bad1)\n````\n~~~\n[x](bad2)\n~~~\n'
                '    [x](bad3)\n\t[x](bad4)\n'
                '`[x](bad5)` `` `[x](bad6)` ``\n'
                '<!-- [x](bad7) -->\n\\[x](bad8)\n[x](good)')
        self.assertEqual(list(checker.links(text)), [(12, "good")])

    def test_fence_content_cannot_close_a_different_fence(self):
        self.assertEqual(list(checker.links('````\n```\n[x](bad)\n````\n[x](ok)')),
                         [(5, "ok")])

    def test_relative_url_decoding_and_fragments(self):
        self.assertEqual(checker.relative_path('a%20b.md?view=1#section'), 'a b.md')
        self.assertEqual(checker.relative_path(r'a\(b\).md#x'), 'a(b).md')
        self.assertEqual(checker.relative_path('a&amp;b.md'), 'a&b.md')
        self.assertEqual(checker.relative_path('a%23b.md#anchor'), 'a#b.md')
        for value in ('#anchor', '', 'https://example.com/x', 'mailto:a@b',
                      '//example.com/x', '/site/path', 'C:/private/file'):
            with self.subTest(value=value):
                self.assertIsNone(checker.relative_path(value))

    def test_malformed_inline_link_is_not_a_destination(self):
        self.assertEqual(list(checker.links('[x](bad(unbalanced) [y](bad title)')), [])

    def test_audit_scope_relative_resolution_and_line_numbers(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / 'docs/sub').mkdir(parents=True)
            for name in ('README.md', 'LEGAL.md', 'CONTRIBUTING.md'):
                (root / name).write_text('', encoding='utf-8')
            (root / 'docs/sub/a b.md').write_text('[ok](../../README.md#x)', encoding='utf-8')
            (root / 'README.md').write_text(
                '[ok](docs/sub/a%20b.md)\n[missing](docs/no.md#x)\n'
                '[directory](docs/sub/)\n[external](https://example.com)\n', encoding='utf-8')
            (root / 'excluded.md').write_text('[x](missing)', encoding='utf-8')
            checked, missing = checker.audit(root)
            self.assertEqual(checked, 4)
            self.assertEqual(missing, [('README.md', 2, 'docs/no.md#x')])

    def test_outside_checkout_is_reported_even_when_it_exists(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp) / 'repo'
            root.mkdir()
            (Path(tmp) / 'outside.md').touch()
            for name in ('README.md', 'LEGAL.md', 'CONTRIBUTING.md'):
                (root / name).write_text('[x](../outside.md)' if name == 'README.md' else '', encoding='utf-8')
            self.assertEqual(checker.audit(root), (1, [('README.md', 1, '../outside.md')]))


if __name__ == '__main__':
    unittest.main()
