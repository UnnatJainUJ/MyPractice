// building the database
db.inventory.insertMany([
    { item: "journal", qty: 225, tags: ["blank", "red"], size: { h: 14, w: 21, uom: "cm" } },
    { item: "mat", qty: 815, tags: ["cotton"], size: { h: 27.9, w: 35.5, uom: "cm" } },
    { item: "mousepad", qty: 215, tags: ["gel", "blue"], size: { h: 19, w: 22.85, uom: "cm"}}])



    // Descending order of quantity
    db.inventory.find({}).sort({qty:-1})

    // Ascending Order of Quantity
    db.inventory.find({}).sort({qty:1})

    db.inventory.find({}).skip(1) //Skips 1st Document
    db.inventory.find({}).skip(2) //Skips 1st 2 Documents
    
    
    db.inventory.find({}).limits(2) //LImits the number of documents in op to 2


    // Pagination using find and limit 

    no = 8
    db.blog.find().skip((pageNo -1)*no).limit(no)
    pageno = 1 db.blog.find().skip((0).limit(8)
    pageno = 2 db.blog.find().skip((8).limit(8)
