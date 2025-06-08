const el=document.getElementByTagName('div')

// a variavel val, vai ver os elemento (el,)pegararpa o html e subsittuira por
const val=Array.prototype.map.call(el,({innerHTML})=>"innerHTML")
console.log(val)