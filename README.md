##### git与github使用

使用分布控制，避免意外的覆盖

拉取远程仓库代码：git pull origin main  =  git fetch  +  git merge



`git status`: 检查本地仓库状态，确保工作区干净或了解现有修改。

`git fetch`: 从远程仓库获取最新更新。

`git status`: 再次检查，看是否落后于远程分支。如果落后，它会提示你 `Your branch is behind 'origin/main' by X commits, and can be fast-forwarded.`

`git diff <你的本地分支> <对应的远程跟踪分支>` (例如：`git diff main origin/main`): **这是最关键的一步！** 在这里，你可以预览所有即将被合并到你本地的更改。仔细检查这些差异。

`git merge`: 如果你对预览的更改感到满意，就执行 `git merge` 来将这些更新合并到你的本地分支，并更新你的工作目录。
