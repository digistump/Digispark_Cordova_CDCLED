cordova.define('cordova/plugin_list', function(require, exports, module) {
module.exports = [
    {
        "file": "plugins/com.digistump.digicdc/www/digicdc.js",
        "id": "com.digistump.digicdc.Digicdc",
        "clobbers": [
            "window.digicdc"
        ]
    }
];
module.exports.metadata = 
// TOP OF METADATA
{
    "com.digistump.digicdc": "0.1.0"
}
// BOTTOM OF METADATA
});