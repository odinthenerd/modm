# How to contribute

We love receiving pull requests. We use them ourselves for reviewing new features
and fixing issues in modm. If you want to contribute, but don't exactly know what
or how, have a look at the [issues we tagged with "help wanted"][help_wanted] or
the [threads tagged with "💡 Ideas"][ideas].

To start contributing, please fork modm and then start a new branch on top of
the `develop` branch. We prefer to fast-forward merges, instead of creating a
merge commit, so your contributions must be up-to-date with develop.

We recommend prefixing your branch with
- `feature/` for new functionality, or
- `fix/` for a bug fix.

Please remember to have a look at [our coding conventions](docs/coding_convention.md).
Note that we have a `.clang-format` in the repository that can help you.
There should be no whitespace-only changes in pull requests.

Once you [open the pull request][pulls], we will review it and might ask you for
changes. Remember that you can continue to push to your `feature/*` or `fix/*`
branches to update the corresponding pull requests!

Including unit tests is very welcomed and highly recommended. modm has its own
simple and easy to use unit test framework. Unit tests are placed in the `modm/test`
subdirectory. [See testing strategies in modm](test/README.md).

The CI first compiles all examples and unittests and then executes the unittests
for Linux. If all of that passes, it will compile all `:platform:**` modules for
all supported devices. Please note that your pull request will have to pass ALL
CI tests in order to be merged.


## When in doubt, ask

The dedicated maintainers of modm are [@salkinium](https://github.com/salkinium)
and [@rleh](https://github.com/rleh) and you can always ping them.

If you want to add a new platform, or other significant functionality, we
[ask you to discuss that in a thread first][ideas]. We are very open to
new helping hands, but all of this is still fairly complicated and we want to
provide you with tips and additional explanations along the way.

Communication is cheap, implementation is expensive and we don't want to
frustrate you.

[issues]: https://github.com/modm-io/modm/issues
[pulls]: https://github.com/modm-io/modm/pulls
[ideas]: https://github.com/modm-io/modm/discussions/categories/ideas
[help_wanted]: https://github.com/modm-io/modm/issues?q=is%3Aissue+is%3Aopen+label%3A%22help+wanted+🛠%22
