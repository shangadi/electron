const fs = require('fs')
const path = require('path')

const gniPath = path.resolve(__dirname, '../filenames.auto.gni')

const allDocs = fs.readdirSync(path.resolve(__dirname, '../docs/api'))

fs.writeFileSync(
  gniPath,
  `# THIS FILE IS AUTO-GENERATED, PLEASE DO NOT EDIT BY HAND
auto_filenames = {
  api_docs = [
${allDocs.map(doc => `    "docs/api/${doc}",`).join('\n')}
  ]
}`
)
