var appName = rawInput("请输入应用名称");
var packageName = getPackageName(appName);
if (!packageName) {
        toast("应用不存在！");
}
launchApp(appName);
