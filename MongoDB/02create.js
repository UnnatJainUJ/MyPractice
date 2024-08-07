db.inventory.insertOne(
    { item: "canvas", qty: 100, tags: ["cotton"], size: { h: 28, w: 35.5, uom: "cm" } }
 )


 db.inventory.insertMany([
{ item: "journal", qty: 225, tags: ["blank", "red"], size: { h: 14, w: 21, uom: "cm" } },
{ item: "mat", qty: 815, tags: ["cotton"], size: { h: 27.9, w: 35.5, uom: "cm" } },
{ item: "mousepad", qty: 215, tags: ["gel", "blue"], size: { h: 19, w: 22.85, uom: "cm"}}])