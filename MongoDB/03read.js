db.inventory.find()//==Fetch All Documents
db.inventory.find({qty:225})

db.inventory.find( { tags: { $in: [ "red", "D" ] } } )

//AND
db.inventory.find( { status: "A", qty: { $lt: 30 } } )

//OR
db.inventory.find( { $or: [ { status: "A" }, { qty: { $lt: 30 } } ] } )

db.inventory.findOne( { tags: { $in: [ "red", "D" ] } } )
