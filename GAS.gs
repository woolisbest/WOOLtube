function doGet() {
  const url = 'https://cdn.jsdelivr.net/gh/woolisbest/WOOLtube@main/main/index.html';

  const response = UrlFetchApp.fetch(url, { muteHttpExceptions: true });
  const html = response.getContentText();

  return HtmlService.createHtmlOutput(html)
    .setXFrameOptionsMode(HtmlService.XFrameOptionsMode.ALLOWALL) // 必要ならiframe許可
    .setSandboxMode(HtmlService.SandboxMode.IFRAME);
}
