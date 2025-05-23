#### git与github使用

使用分布控制，避免意外的覆盖

拉取远程仓库代码：git pull origin main  =  git fetch  +  git merge



`git status`: 检查本地仓库状态，确保工作区干净或了解现有修改。

`git fetch`: 从远程仓库获取最新更新。

`git status`: 再次检查，看是否落后于远程分支。如果落后，它会提示你 `Your branch is behind 'origin/main' by X commits, and can be fast-forwarded.`

`git diff <你的本地分支> <对应的远程跟踪分支>` (例如：`git diff main origin/main`): **这是最关键的一步！** 在这里，你可以预览所有即将被合并到你本地的更改。仔细检查这些差异。

`git merge`: 如果你对预览的更改感到满意，就执行 `git merge` 来将这些更新合并到你的本地分支，并更新你的工作目录。



#### Vim编辑器

**接受默认信息并保存退出：**

1. - 按下 `Esc` 键 (确保你不在插入模式)。
   - 输入 `:wq` (冒号 `w` 代表 write (保存)，`q` 代表 quit (退出))。
   - 按下 `Enter` 键。
2. **编辑信息并保存退出：**
   - 按下 `i` 键 (进入插入模式)。
   - 你可以修改或添加内容（在非 `#` 开头的行）。
   - 修改完成后，按下 `Esc` 键 (退出插入模式)。
   - 输入 `:wq`。
   - 按下 `Enter` 键。
3. **放弃合并 (如果你不想合并，或者想重新开始)：**
   - 按下 `Esc` 键。
   - 输入 `:q!` (冒号 `q` 代表 quit (退出)，`!` 代表强制，不保存)。
   - 按下 `Enter` 键。
   - **注意：** 如果你放弃了合并，你的 `git pull` 操作就会中止，你需要再次执行 `git pull` 并处理合并。通常不建议这样做，除非你确定你不想合并。
